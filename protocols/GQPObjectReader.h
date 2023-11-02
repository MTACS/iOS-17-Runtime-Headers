
@protocol GQPObjectReader <NSObject>

@required

- (int)beginReadingFromReader:(struct _xmlTextReader { }*)arg1 processor:(GQPProcessor *)arg2;
- (int)doneReading:(GQPProcessor *)arg1;

@end
