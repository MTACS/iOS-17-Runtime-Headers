
@interface CTSimSetupUsage : NSObject <NSSecureCoding> {
    unsigned long long  _alsPlans;
    bool  _inBuddy;
    unsigned long long  _odaPlans;
    unsigned long long  _selectedAlsPlans;
    unsigned long long  _selectedTransferablePlans;
    unsigned long long  _transferablePlans;
}

@property unsigned long long alsPlans;
@property bool inBuddy;
@property unsigned long long odaPlans;
@property unsigned long long selectedAlsPlans;
@property unsigned long long selectedTransferablePlans;
@property unsigned long long transferablePlans;

+ (bool)supportsSecureCoding;

- (unsigned long long)alsPlans;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)inBuddy;
- (id)initWithCoder:(id)arg1;
- (id)initWithInBuddy:(bool)arg1 transferablePlans:(unsigned long long)arg2 selectedTransferablePlans:(unsigned long long)arg3 alsPlans:(unsigned long long)arg4 selectedAlsPlans:(unsigned long long)arg5 odaPlans:(unsigned long long)arg6;
- (bool)isEqual:(id)arg1;
- (unsigned long long)odaPlans;
- (unsigned long long)selectedAlsPlans;
- (unsigned long long)selectedTransferablePlans;
- (void)setAlsPlans:(unsigned long long)arg1;
- (void)setInBuddy:(bool)arg1;
- (void)setOdaPlans:(unsigned long long)arg1;
- (void)setSelectedAlsPlans:(unsigned long long)arg1;
- (void)setSelectedTransferablePlans:(unsigned long long)arg1;
- (void)setTransferablePlans:(unsigned long long)arg1;
- (unsigned long long)transferablePlans;

@end
