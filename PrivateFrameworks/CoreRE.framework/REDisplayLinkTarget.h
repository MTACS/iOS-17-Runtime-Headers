
@interface REDisplayLinkTarget : NSObject {
    void * _clock;
}

- (id)initWithClock:(void*)arg1;
- (void)update;
- (void)updateOnQueue;

@end
