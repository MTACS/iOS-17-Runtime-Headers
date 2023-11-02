
@interface WFSyntaxHighlightToken : NSObject <WFSyntaxHighlightToken> {
    int  _length;
    bool  _overflows;
    int  _start;
    NSString * _string;
}

@property int length;
@property bool overflows;
@property int start;
@property (retain) NSString *string;

+ (id)constructToken;

- (void).cxx_destruct;
- (id)description;
- (int)length;
- (bool)overflows;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setLength:(int)arg1;
- (void)setOverflows:(bool)arg1;
- (void)setStart:(int)arg1;
- (void)setString:(id)arg1;
- (int)start;
- (id)string;

@end
