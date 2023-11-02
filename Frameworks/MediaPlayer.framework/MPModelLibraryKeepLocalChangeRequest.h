
@interface MPModelLibraryKeepLocalChangeRequest : NSObject <NSCopying> {
    unsigned long long  _constraints;
    long long  _enableState;
    MPModelObject * _modelObject;
}

@property (nonatomic) unsigned long long constraints;
@property (nonatomic) long long enableState;
@property (nonatomic, retain) MPModelObject *modelObject;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (void).cxx_destruct;
- (unsigned long long)constraints;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)enableState;
- (id)modelObject;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (void)setConstraints:(unsigned long long)arg1;
- (void)setEnableState:(long long)arg1;
- (void)setModelObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync

+ (unsigned long long)nms_defaultKeepLocalConstraints;

@end
