
@interface MPMediaPredicate : NSObject <MPPProtobufferCoding, NSSecureCoding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (bool)evaluateEntity:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobufferDecodableObject:(id)arg1;
- (id)initWithProtobufferDecodableObject:(id)arg1 library:(id)arg2;
- (id)protobufferEncodableObject;
- (id)protobufferEncodableObjectFromLibrary:(id)arg1;

// Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI

+ (id)_vui_isNetworkPlayablePredicate:(bool)arg1;
+ (id)_vui_isPlayablePredicate:(bool)arg1;
+ (id)vui_isLocalPredicate:(bool)arg1 comparison:(long long)arg2;
+ (id)vui_isPlayablePredicate:(bool)arg1 comparison:(long long)arg2;
+ (id)vui_mediaEntityTypePredicate:(id)arg1 comparison:(long long)arg2;
+ (id)vui_restrictionsPredicateWithMediaEntityType:(id)arg1 mediaLibrary:(id)arg2;
+ (id)vui_seasonIdentifierPredicate:(id)arg1 comparison:(long long)arg2;
+ (id)vui_seasonNumberPredicate:(unsigned long long)arg1 comparison:(long long)arg2;
+ (id)vui_showPersistentIDPredicate:(unsigned long long)arg1 comparison:(long long)arg2;

@end
