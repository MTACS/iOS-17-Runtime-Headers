
@interface RBSInheritanceChangeSet : NSObject <RBSXPCSecureCoding> {
    NSSet * _gainedInheritances;
    NSSet * _lostInheritances;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSSet *gainedInheritances;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSSet *lostInheritances;
@property (readonly) Class superclass;

+ (bool)supportsRBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (id)gainedInheritances;
- (id)initWithGainedInheritances:(id)arg1 lostInheritances:(id)arg2;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lostInheritances;

@end
