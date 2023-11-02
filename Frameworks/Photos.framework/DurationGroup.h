
@interface DurationGroup : NSObject {
    NSDate * _end;
    unsigned long long  _groupId;
    NSDate * _start;
    bool  _wasChanged;
}

@property (retain) NSDate *end;
@property (readonly) unsigned long long groupId;
@property (retain) NSDate *start;
@property bool wasChanged;

- (void).cxx_destruct;
- (id)description;
- (id)end;
- (unsigned long long)groupId;
- (id)initWithStart:(id)arg1 end:(id)arg2;
- (void)setEnd:(id)arg1;
- (void)setStart:(id)arg1;
- (void)setWasChanged:(bool)arg1;
- (id)start;
- (bool)wasChanged;

@end
