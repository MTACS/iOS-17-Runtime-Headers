
@interface CLSArchivedHandout : CLSAbstractHandout <CLSRelationable>

@property (nonatomic, readonly) NSArray *attachments;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)relations;
+ (bool)supportsSecureCoding;

- (id)_init;
- (id)attachments;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
