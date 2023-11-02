
@interface SIRINLUUserWantedToRepeat : NSObject <SIRINLUUserDialogAct> {
    USOSerializedGraph * _reference;
    NSUUID * _systemDialogActId;
}

@property (nonatomic, retain) USOSerializedGraph *reference;
@property (nonatomic, retain) NSUUID *systemDialogActId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSystemDialogActId:(id)arg1 reference:(id)arg2;
- (id)reference;
- (void)setReference:(id)arg1;
- (void)setSystemDialogActId:(id)arg1;
- (id)systemDialogActId;

@end
