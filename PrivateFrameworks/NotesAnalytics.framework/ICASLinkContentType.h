
@interface ICASLinkContentType : NSObject <AADataType> {
    long long  _linkContentType;
}

@property (nonatomic, readonly) long long linkContentType;

- (id)initWithLinkContentType:(long long)arg1;
- (long long)linkContentType;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
