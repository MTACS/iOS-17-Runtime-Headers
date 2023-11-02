
@interface ATAudioSessionUtils : NSObject

+ (id)KVOProperties;
+ (id)categories;
+ (id)getAVASCategory:(unsigned int)arg1;
+ (id)getAVASMode:(unsigned int)arg1;
+ (id)getAVASProperty:(unsigned int)arg1;
+ (unsigned int)getAudioSessionCategory:(id)arg1;
+ (unsigned int)getAudioSessionMode:(id)arg1;
+ (struct __CFString { }*)getAudioSessionPortType:(id)arg1 forInput:(bool)arg2;
+ (unsigned int)getAudioSessionProperty:(id)arg1;
+ (unsigned long long)getCategoryOptionFromPropertyID:(unsigned int)arg1;
+ (id)getMappedObjectOf:(id)arg1 inside:(id)arg2 ofType:(int)arg3;
+ (id)getPort:(id)arg1 forInput:(bool)arg2;
+ (id)getPorts:(id)arg1 forInput:(bool)arg2;
+ (id)getRouteDescriptionFromAVASRouteDescription:(id)arg1;
+ (id)getRouteStringFromAVASRouteDescription:(id)arg1;
+ (id)inputPortTypes;
+ (id)modes;
+ (id)outputPortTypes;

@end
