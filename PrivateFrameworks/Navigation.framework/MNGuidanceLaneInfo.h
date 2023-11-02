
@interface MNGuidanceLaneInfo : NSObject <NSSecureCoding> {
    int  _composedGuidanceEventIndex;
    long long  _distanceDetailLevel;
    NSArray * _instructions;
    bool  _isForManeuver;
    NSArray * _lanes;
    NSArray * _primaryStrings;
    NSArray * _secondaryStrings;
    NSArray * _titles;
    NSUUID * _uniqueID;
    NSDictionary * _variableOverrides;
}

@property (nonatomic, readonly) int composedGuidanceEventIndex;
@property (nonatomic, readonly) long long distanceDetailLevel;
@property (nonatomic, readonly) NSArray *instructions;
@property (nonatomic, readonly) bool isForManeuver;
@property (nonatomic, readonly) NSArray *lanes;
@property (nonatomic, retain) NSArray *primaryStrings;
@property (nonatomic, retain) NSArray *secondaryStrings;
@property (nonatomic, readonly) NSArray *titles;
@property (nonatomic, readonly) NSUUID *uniqueID;
@property (nonatomic, readonly) NSDictionary *variableOverrides;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)composedGuidanceEventIndex;
- (id)description;
- (long long)distanceDetailLevel;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 isForManeuver:(bool)arg2 lanes:(id)arg3 titles:(id)arg4 instructions:(id)arg5 variableOverrides:(id)arg6 distanceDetailLevel:(long long)arg7 composedGuidanceEventIndex:(int)arg8;
- (id)instructions;
- (bool)isForManeuver;
- (id)lanes;
- (id)primaryStrings;
- (id)secondaryStrings;
- (void)setPrimaryStrings:(id)arg1;
- (void)setSecondaryStrings:(id)arg1;
- (id)titles;
- (id)uniqueID;
- (id)variableOverrides;

@end
