
@interface EKUIAvailabilityParticipantList : UIScrollView {
    NSMutableArray * _containers;
    double  _rowHeight;
    double  _scrollOffset;
}

+ (double)listWidthForCompact:(bool)arg1;

- (void).cxx_destruct;
- (id)initWithParticipants:(id)arg1 viewController:(id)arg2;
- (void)layoutSubviews;
- (void)setBusyParticipants:(id)arg1;
- (void)setRowHeight:(double)arg1;
- (void)setVerticalScrollOffset:(double)arg1;

@end
