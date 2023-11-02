
@interface DESpeakableString : NSObject {
    void * _This;
}

@property void*This;
@property (retain) NSString *print;
@property (retain) NSString *speak;

- (void*)This;
- (void)dealloc;
- (id)init;
- (id)initWithPrint:(id)arg1 speak:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)print;
- (void)setPrint:(id)arg1;
- (void)setSpeak:(id)arg1;
- (void)setThis:(void*)arg1;
- (id)speak;

@end
