
@interface ENUITextPosition : UITextPosition {
    unsigned long long  _location;
}

@property (nonatomic) unsigned long long location;

+ (id)positionWithLocation:(unsigned long long)arg1;

- (unsigned long long)location;
- (void)setLocation:(unsigned long long)arg1;

@end
