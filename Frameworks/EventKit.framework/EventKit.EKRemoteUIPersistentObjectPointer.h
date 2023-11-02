
@interface EventKit.EKRemoteUIPersistentObjectPointer : NSObject <NSSecureCoding> {
    void isPendingInsert;
    void objectID;
}

@property (nonatomic, readonly) bool isPendingInsert;
@property (nonatomic, readonly) EKObjectID *objectID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isPendingInsert;
- (id)objectID;

@end
