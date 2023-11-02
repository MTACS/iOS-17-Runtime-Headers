
@interface AVAudioUnitComponent : NSObject {
    void * _impl;
}

@property (nonatomic, readonly) NSArray *allTagNames;
@property (nonatomic, readonly) struct OpaqueAudioComponent { }*audioComponent;
@property (nonatomic, readonly) struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } audioComponentDescription;
@property (nonatomic, readonly) NSArray *availableArchitectures;
@property (nonatomic, readonly) NSURL *componentURL;
@property (nonatomic, readonly) NSDictionary *configurationDictionary;
@property (nonatomic, readonly) bool hasCustomView;
@property (nonatomic, readonly) bool hasMIDIInput;
@property (nonatomic, readonly) bool hasMIDIOutput;
@property (nonatomic, readonly) UIImage *icon;
@property (nonatomic, readonly) NSURL *iconURL;
@property (nonatomic, readonly) NSString *localizedTypeName;
@property (nonatomic, readonly) NSString *manufacturerName;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) bool passesAUVal;
@property (getter=isSandboxSafe, nonatomic, readonly) bool sandboxSafe;
@property (nonatomic, readonly) NSString *typeName;
@property (copy) NSArray *userTagNames;
@property (nonatomic, readonly) unsigned long long version;
@property (nonatomic, readonly) NSString *versionString;

- (id)GetTypeName:(unsigned int)arg1;
- (id)allTagNames;
- (struct OpaqueAudioComponent { }*)audioComponent;
- (struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })audioComponentDescription;
- (id)availableArchitectures;
- (id)componentURL;
- (id)configurationDictionary;
- (bool)hasCustomView;
- (bool)hasMIDIInput;
- (bool)hasMIDIOutput;
- (id)icon;
- (id)iconURL;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1 withAVAUManagerImpl:(struct AVAudioUnitComponentManagerImpl { int (**x1)(); id x2; id x3; id x4; struct mutex { struct _opaque_pthread_mutex_t { long long x_1_2_1; BOOL x_1_2_2[56]; } x_5_1_1; } x5; }*)arg2;
- (bool)isComponentDescriptionMatch:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1;
- (bool)isSandboxSafe;
- (void)localeChanged;
- (id)localizedTypeName;
- (id)manufacturerName;
- (id)name;
- (bool)passesAUVal;
- (void)setUserTagNames:(id)arg1;
- (bool)supportsNumberInputChannels:(long long)arg1 outputChannels:(long long)arg2;
- (id)typeName;
- (id)userTagNames;
- (bool)validateWithResults:(id)arg1 inCompletionHandler:(id /* block */)arg2;
- (unsigned long long)version;
- (id)versionString;

@end
