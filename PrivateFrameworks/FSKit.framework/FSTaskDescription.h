
@interface FSTaskDescription : NSObject <NSSecureCoding> {
    NSString * _taskBundleID;
    NSError * _taskErrorState;
    NSUUID * _taskExtensionInstanceID;
    NSUUID * _taskID;
    NSString * _taskInitiatorID;
    NSString * _taskPurpose;
    NSObject * _taskReferenceHolder;
    FSResource * _taskResource;
    NSString * _taskSigningID;
    unsigned char  _taskState;
}

@property (readonly, copy) NSString *taskBundleID;
@property (readonly, retain) NSError *taskErrorState;
@property (readonly, copy) NSUUID *taskExtensionInstanceID;
@property (readonly, copy) NSUUID *taskID;
@property (copy) NSString *taskInitiatorID;
@property (readonly, copy) NSString *taskPurpose;
@property (retain) NSObject *taskReferenceHolder;
@property (readonly, copy) FSResource *taskResource;
@property (copy) NSString *taskSigningID;
@property (readonly) unsigned char taskState;

+ (id)newWithID:(id)arg1 state:(unsigned char)arg2 purpose:(id)arg3 error:(id)arg4 bundleID:(id)arg5 extensionID:(id)arg6 resource:(id)arg7;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 state:(unsigned char)arg2 purpose:(id)arg3 error:(id)arg4 bundleID:(id)arg5 extensionID:(id)arg6 resource:(id)arg7;
- (void)setTaskInitiatorID:(id)arg1;
- (void)setTaskReferenceHolder:(id)arg1;
- (void)setTaskSigningID:(id)arg1;
- (id)taskBundleID;
- (id)taskErrorState;
- (id)taskExtensionInstanceID;
- (id)taskID;
- (id)taskInitiatorID;
- (id)taskPurpose;
- (id)taskReferenceHolder;
- (id)taskResource;
- (id)taskSigningID;
- (unsigned char)taskState;
- (id)updatedDescriptionInState:(unsigned char)arg1 error:(id)arg2;

@end
