
@interface SCROBrailleEvent : NSObject {
    id  _data;
    id  _data2;
    id  _data3;
    bool  _shouldDisplay;
    int  _type;
}

@property (nonatomic) bool shouldDisplay;
@property (nonatomic, readonly) int type;

+ (id)eventWithType:(int)arg1 data:(id)arg2;
+ (id)eventWithType:(int)arg1 data:(id)arg2 data2:(id)arg3 data3:(id)arg4;

- (void).cxx_destruct;
- (id)data;
- (id)data2;
- (id)data3;
- (id)description;
- (id)initWithType:(int)arg1 data:(id)arg2 data2:(id)arg3 data3:(id)arg4;
- (void)setShouldDisplay:(bool)arg1;
- (bool)shouldDisplay;
- (int)type;

@end
