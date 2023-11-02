
@interface UAFAsset : NSObject {
    unsigned long long  _hash;
    NSURL * _location;
    NSDictionary * _metadata;
    NSString * _name;
}

@property (readonly, copy) NSURL *location;
@property (readonly, copy) NSDictionary *metadata;
@property (readonly, copy) NSString *name;

// Image: /System/Library/PrivateFrameworks/UnifiedAssetFramework.framework/UnifiedAssetFramework

- (void).cxx_destruct;
- (unsigned long long)_generateHash;
- (id)description;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 location:(id)arg2 metadata:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)location;
- (id)metadata;
- (id)name;

// Image: /System/Library/Frameworks/Speech.framework/Speech

- (bool)_assetMetadataAvailable;
- (bool)_preferOverServer;
- (bool)_supportsAutoPunctuation;
- (bool)_supportsContinuousListening;
- (bool)_supportsEmojiRecognition;
- (bool)_supportsOnDeviceSearch;
- (bool)_supportsVoiceCommands;

@end
