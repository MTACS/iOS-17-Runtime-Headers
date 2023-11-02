
@interface CLSAbstractHandout : CLSObject <CLSAssetAdopter, CLSMutableAssetAdopter> {
    NSDate * _dateOfPublication;
    NSDate * _dueDate;
    NSString * _instructions;
    NSString * _title;
    NSArray * assets;
}

@property (nonatomic, readonly) NSArray *assets;
@property (nonatomic, retain) NSDate *dateOfPublication;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDate *dueDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *instructions;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (void)addAsset:(id)arg1;
- (id)assets;
- (id)dateOfPublication;
- (id)dictionaryRepresentation;
- (id)dueDate;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)instructions;
- (void)mergeWithObject:(id)arg1;
- (void)removeAsset:(id)arg1;
- (void)setDateOfPublication:(id)arg1;
- (void)setDueDate:(id)arg1;
- (void)setInstructions:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
