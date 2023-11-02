
@interface CLKUIAtlas : NSObject {
    double  _boundTime;
    unsigned long long  _height;
    _Atomic int  _instanceCount;
    unsigned long long  _maxMipmapLevelsToDrop;
    unsigned long long  _maxPlaceholderSize;
    unsigned long long  _memoryCost;
    unsigned long long  _status;
    NSString * _uuid;
    unsigned long long  _width;
}

@property (nonatomic) double boundTime;
@property (nonatomic, readonly) unsigned long long height;
@property (nonatomic, readonly) long long instanceCount;
@property (readonly) bool isPurgable;
@property (nonatomic) unsigned long long maxMipmapLevelsToDrop;
@property (nonatomic) unsigned long long maxPlaceholderSize;
@property (nonatomic) unsigned long long memoryCost;
@property (nonatomic) unsigned long long status;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) unsigned long long width;

- (void).cxx_destruct;
- (id)backing;
- (double)boundTime;
- (void)decrementInstanceCount;
- (unsigned long long)height;
- (void)incrementInstanceCount;
- (id)initWithUuid:(id)arg1;
- (long long)instanceCount;
- (bool)isPurgable;
- (unsigned long long)maxMipmapLevelsToDrop;
- (unsigned long long)maxPlaceholderSize;
- (unsigned long long)memoryCost;
- (void)setBoundTime:(double)arg1;
- (void)setMaxMipmapLevelsToDrop:(unsigned long long)arg1;
- (void)setMaxPlaceholderSize:(unsigned long long)arg1;
- (void)setMemoryCost:(unsigned long long)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (unsigned long long)status;
- (void)updateTextureStreaming;
- (id)uuid;
- (unsigned long long)width;

@end
