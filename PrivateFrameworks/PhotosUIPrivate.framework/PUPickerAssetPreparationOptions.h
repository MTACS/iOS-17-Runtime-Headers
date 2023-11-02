
@interface PUPickerAssetPreparationOptions : NSObject {
    bool  _shouldIncludeCaption;
    bool  _shouldIncludeLocation;
    long long  _userEncodingPolicy;
}

@property (nonatomic, readonly) bool shouldIncludeCaption;
@property (nonatomic, readonly) bool shouldIncludeLocation;
@property (nonatomic, readonly) long long userEncodingPolicy;

- (id)init;
- (id)initWithIncludeLocation:(bool)arg1 includeCaption:(bool)arg2 userEncodingPolicy:(long long)arg3;
- (bool)shouldIncludeCaption;
- (bool)shouldIncludeLocation;
- (long long)userEncodingPolicy;

@end
