
@interface REMLExplanationFormatter : NSObject {
    unsigned long long  _style;
}

@property (nonatomic) unsigned long long style;

- (id)descriptionFromExplanations:(id)arg1;
- (id)init;
- (void)setStyle:(unsigned long long)arg1;
- (unsigned long long)style;

@end
