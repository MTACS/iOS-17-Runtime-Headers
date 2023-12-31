
@interface TSUDateFormatter_NSFormatter : NSFormatter {
    bool  isDateOnly;
    bool  isTimeOnly;
    NSString * mPreferredFormat;
}

@property (nonatomic) bool isDateOnly;
@property (nonatomic) bool isTimeOnly;
@property (nonatomic, retain) NSString *preferredFormat;

- (void)dealloc;
- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (bool)isDateOnly;
- (bool)isTimeOnly;
- (id)preferredFormat;
- (void)setIsDateOnly:(bool)arg1;
- (void)setIsTimeOnly:(bool)arg1;
- (void)setPreferredFormat:(id)arg1;
- (id)stringForObjectValue:(id)arg1;

@end
