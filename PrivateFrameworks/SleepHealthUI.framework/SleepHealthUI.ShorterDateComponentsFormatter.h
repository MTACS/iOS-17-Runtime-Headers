
@interface SleepHealthUI.ShorterDateComponentsFormatter : NSDateComponentsFormatter {
    void options;
}

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)stringFromDateComponents:(id)arg1;
- (id)stringFromTimeInterval:(double)arg1;

@end
