
@interface ReplayPagesTestRunner : PurplePageLoadTestRunner {
    unsigned long long  _attemptCount;
    bool  _eternal;
    unsigned long long  _successCount;
    struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; } * _suiteFile;
}

@property (nonatomic) bool eternal;

- (void)dealloc;
- (bool)eternal;
- (void)finishedTestPage:(id)arg1;
- (bool)loadTestSuiteFile:(id)arg1;
- (void)setEternal:(bool)arg1;
- (void)startNextPage;

@end
