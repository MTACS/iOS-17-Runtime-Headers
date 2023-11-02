
@interface DIIOIterator : DIIOObject {
    bool  _startedOver;
}

@property (nonatomic) bool startedOver;

- (unsigned int)copyNextObject;
- (id)initWithIOIterator:(unsigned int)arg1 retain:(bool)arg2;
- (void)setStartedOver:(bool)arg1;
- (bool)startedOver;

@end
