
@interface WFTTSString : NSObject {
    NSArray * _components;
}

@property (nonatomic, readonly) NSArray *components;
@property (nonatomic, readonly) NSString *displayString;

+ (id)parseAnnotatedString:(id)arg1;

- (void).cxx_destruct;
- (id)components;
- (id)description;
- (id)displayString;
- (id)initWithComponents:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
