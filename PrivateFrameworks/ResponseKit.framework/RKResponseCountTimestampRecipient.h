
@interface RKResponseCountTimestampRecipient : NSObject {
    int  _count;
    bool  _hasSameRecipient;
    NSDate * _timestamp;
}

@property int count;
@property bool hasSameRecipient;
@property (retain) NSDate *timestamp;

- (void).cxx_destruct;
- (int)count;
- (bool)hasSameRecipient;
- (id)initWithCount:(int)arg1 timestamp:(id)arg2 hasSameRecipient:(bool)arg3;
- (void)setCount:(int)arg1;
- (void)setHasSameRecipient:(bool)arg1;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;

@end
