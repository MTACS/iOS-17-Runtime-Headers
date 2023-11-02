
@interface ICCollaborationColorManager : NSObject {
    unsigned long long  _colorUsageCountMinimum;
    NSMutableArray * _colorUsageCounts;
    NSMutableDictionary * _userIDToColorsDict;
}

@property (nonatomic) unsigned long long colorUsageCountMinimum;
@property (nonatomic, retain) NSMutableArray *colorUsageCounts;
@property (nonatomic, retain) NSMutableDictionary *userIDToColorsDict;

+ (id)defaultColor;
+ (id)participantColors;

- (void).cxx_destruct;
- (id)baseColorValuesForUserID:(id)arg1;
- (unsigned long long)colorUsageCountMinimum;
- (id)colorUsageCounts;
- (id)containerScopedUserRecordNameForAccount:(id)arg1;
- (id)highlightColorForUserID:(id)arg1 note:(id)arg2;
- (id)init;
- (id)participantAXDisplayNameForUserID:(id)arg1 forNote:(id)arg2;
- (void)setColorUsageCountMinimum:(unsigned long long)arg1;
- (void)setColorUsageCounts:(id)arg1;
- (void)setUserIDToColorsDict:(id)arg1;
- (id)userIDToColorsDict;

@end
