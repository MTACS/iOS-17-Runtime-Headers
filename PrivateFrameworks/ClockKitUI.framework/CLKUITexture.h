
@interface CLKUITexture : NSObject {
    CLKUIAtlas * _atlas;
    bool  _null;
    void _rect;
}

@property (nonatomic, readonly) CLKUIAtlas *atlas;
@property (getter=isNull, nonatomic, readonly) bool null;
@property (nonatomic, readonly) void rect;
@property (nonatomic, readonly) unsigned long long status;
@property (nonatomic, readonly) NSString *uuid;

+ (id)nullTexture2D;
+ (id)nullTextureCube;
+ (id)textureWithProviderDelegate:(id)arg1 uuid:(id)arg2;
+ (id)textureWithProviderDelegate:(id)arg1 uuid:(id)arg2 nullTexture:(id)arg3;
+ (id)textureWithProviderDelegate:(void *)arg1 uuid:(void *)arg2 rect:(void *)arg3; // needs 3 arg types, found 2: id, id
+ (id)textureWithProviderDelegate:(void *)arg1 uuid:(void *)arg2 rect:(void *)arg3 nullTexture:(void *)arg4; // needs 4 arg types, found 3: id, id, id
+ (id)textureWithProviderDelegate:(void *)arg1 uuid:(void *)arg2 rect:(void *)arg3 nullTexture:(void *)arg4 streaming:(void *)arg5; // needs 5 arg types, found 4: id, id, id, bool
+ (id)textureWithProviderDelegate:(id)arg1 uuid:(id)arg2 streaming:(bool)arg3;

- (void).cxx_destruct;
- (id)atlas;
- (void)dealloc;
- (id)initWithAtlas:(void *)arg1 rect:(void *)arg2; // needs 2 arg types, found 1: id
- (bool)isNull;
- (void)rect;
- (unsigned long long)status;
- (id)uuid;

@end
