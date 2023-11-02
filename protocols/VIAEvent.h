
@protocol VIAEvent <NSObject>

@required

- (SFFeedback *)feedback;
- (NSString *)originatingApplication;
- (unsigned long long)queryID;

@end
