
@interface AVTDifferentialPrivacyRecorder : NSObject <AVTDifferentialPrivacyRecorder> {
    id /* block */  _numRecorderProvider;
    NSMutableDictionary * _numRecorders;
    id /* block */  _stringRecorderProvider;
    NSMutableDictionary * _stringRecorders;
}

@property (nonatomic, readonly, copy) id /* block */ numRecorderProvider;
@property (nonatomic, readonly) NSMutableDictionary *numRecorders;
@property (nonatomic, readonly, copy) id /* block */ stringRecorderProvider;
@property (nonatomic, readonly) NSMutableDictionary *stringRecorders;

+ (id /* block */)makeCachingNumRecorderProvider:(id /* block */)arg1;
+ (id /* block */)makeCachingStringRecorderProvider:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithStringRecorderProvider:(id /* block */)arg1 numericDataRecorderProvider:(id /* block */)arg2;
- (id /* block */)numRecorderProvider;
- (id)numRecorders;
- (void)recordNumber:(id)arg1 forKey:(id)arg2;
- (void)recordString:(id)arg1 forKey:(id)arg2;
- (id /* block */)stringRecorderProvider;
- (id)stringRecorders;

@end
