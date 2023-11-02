
@interface IMTrimDatabaseToDays : IMAbstractDatabaseTrimmer {
    long long  _newerThanDays;
}

@property (nonatomic, readonly) long long newerThanDays;

- (id)initWithSourceDatabasePath:(id)arg1 destinationDatabasePath:(id)arg2 newerThanDays:(long long)arg3;
- (long long)newerThanDays;
- (void)performMessageSelectionWithOperation:(struct IMDSqlOperation { void *x1; void *x2; struct __CFString {} *x3; void *x4; struct IMDSqlStatement { void *x_5_1_1; int x_5_1_2; struct __CFString {} *x_5_1_3; struct sqlite3 {} *x_5_1_4; int x_5_1_5; int x_5_1_6; int x_5_1_7; struct IMPerfMeasurement_t { struct IMFileLocation_t { char *x_1_3_1; char *x_1_3_2; char *x_1_3_3; char *x_1_3_4; int x_1_3_5; } x_8_2_1; unsigned long long x_8_2_2; unsigned long long x_8_2_3; struct __CFString {} *x_8_2_4; double x_8_2_5; double x_8_2_6; double x_8_2_7; } x_5_1_8; } x5; struct __CFError {} *x6; }*)arg1;

@end
