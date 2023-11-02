
@interface SWMediaSettings : NSObject {
    bool  _fullScreenEnabled;
    unsigned long long  _mediaTypesRequiringUserActionForPlayback;
}

@property (nonatomic, readonly) bool fullScreenEnabled;
@property (nonatomic, readonly) unsigned long long mediaTypesRequiringUserActionForPlayback;

- (bool)fullScreenEnabled;
- (id)initWithMediaTypesRequiringUserActionForPlayback:(unsigned long long)arg1 fullScreenEnabled:(bool)arg2;
- (unsigned long long)mediaTypesRequiringUserActionForPlayback;

@end
