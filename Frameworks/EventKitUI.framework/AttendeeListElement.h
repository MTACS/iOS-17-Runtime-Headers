
@interface AttendeeListElement : NSObject {
    NSMutableAttributedString * _string;
    bool  _xMore;
}

@property (retain) NSMutableAttributedString *string;
@property bool xMore;

- (void).cxx_destruct;
- (void)setString:(id)arg1;
- (void)setXMore:(bool)arg1;
- (id)string;
- (bool)xMore;

@end
