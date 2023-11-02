
@protocol SFPrivacyReportGridItem <NSObject>

@required

- (<SFPrivacyReportGridItemDelegate> *)delegate;
- (unsigned long long)gridPosition;
- (void)setDelegate:(id <SFPrivacyReportGridItemDelegate>)arg1;
- (void)setGridPosition:(unsigned long long)arg1;

@end
