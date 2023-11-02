
@interface SMArtwork : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  artwork;
}

@property (nonatomic, readonly) NSString *backgroundColor;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *template;
@property (nonatomic, readonly) NSString *textColor;

- (void).cxx_destruct;
- (id)backgroundColor;
- (long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)template;
- (id)textColor;

@end
