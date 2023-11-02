
@interface PKApplicationMessageRequest : NSObject {
    bool  _badge;
    unsigned long long  _priority;
    bool  _resetCreatedDate;
}

@property (nonatomic) bool badge;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) bool resetCreatedDate;

- (bool)badge;
- (unsigned long long)priority;
- (bool)resetCreatedDate;
- (void)setBadge:(bool)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setResetCreatedDate:(bool)arg1;

@end
