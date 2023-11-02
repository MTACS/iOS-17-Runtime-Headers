
@interface EKCalendarCancelValidationEditItem : EKCalendarButtonEditItem {
    bool  _hidden;
}

@property (nonatomic) bool hidden;

- (bool)hidden;
- (unsigned long long)numberOfSubitems;
- (void)setHidden:(bool)arg1;

@end
