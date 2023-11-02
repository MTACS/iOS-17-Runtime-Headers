
@interface SIRINLUUserRejected : NSObject <SIRINLUUserDialogAct> {
    NSUUID * _offerId;
    USOSerializedGraph * _reference;
}

@property (nonatomic, retain) NSUUID *offerId;
@property (nonatomic, retain) USOSerializedGraph *reference;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOfferId:(id)arg1 reference:(id)arg2;
- (id)offerId;
- (id)reference;
- (void)setOfferId:(id)arg1;
- (void)setReference:(id)arg1;

@end
