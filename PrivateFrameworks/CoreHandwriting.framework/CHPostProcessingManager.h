
@interface CHPostProcessingManager : NSObject {
    NSArray * _sequence;
}

@property (nonatomic, retain) NSArray *sequence;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSequence:(id)arg1;
- (id)initWithStep:(id)arg1;
- (id)process:(id)arg1 options:(id)arg2;
- (id)sequence;
- (void)setSequence:(id)arg1;

@end
