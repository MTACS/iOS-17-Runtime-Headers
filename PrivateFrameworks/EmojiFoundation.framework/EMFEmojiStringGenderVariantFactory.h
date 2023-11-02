
@interface EMFEmojiStringGenderVariantFactory : NSObject {
    int  _gender;
    NSString * _sourceString;
}

@property (nonatomic, readonly) int gender;
@property (nonatomic, copy) NSString *sourceString;

- (void).cxx_destruct;
- (int)gender;
- (id)initWithSourceString:(id)arg1 gender:(int)arg2;
- (void)setSourceString:(id)arg1;
- (id)sourceString;
- (id)stringForGenderVariant:(int)arg1;

@end
