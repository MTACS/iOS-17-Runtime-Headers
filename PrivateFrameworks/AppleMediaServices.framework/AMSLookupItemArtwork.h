
@interface AMSLookupItemArtwork : NSObject {
    NSDictionary * _artworkDictionary;
}

@property (nonatomic, readonly) NSString *URLString;
@property (nonatomic, readonly) NSDictionary *artworkDictionary;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) double width;

- (void).cxx_destruct;
- (id)URLString;
- (id)URLWithHeight:(long long)arg1 width:(long long)arg2 cropStyle:(id)arg3 format:(id)arg4;
- (id)artworkDictionary;
- (id)colorWithKind:(id)arg1;
- (double)height;
- (id)initWithArtworkDictionary:(id)arg1;
- (double)width;

@end
