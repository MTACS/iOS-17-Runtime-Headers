
@interface ACCNavigationRouteGuidanceUpdateInfo : NSObject <CPAccNavInfo> {
    NSMutableDictionary * _infoDict;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (readonly) unsigned long long hash;
@property (retain) NSMutableDictionary *infoDict;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/AccessoryNavigation.framework/AccessoryNavigation

+ (id)keyForType:(unsigned short)arg1;

- (void).cxx_destruct;
- (bool)_checkDataClassForType:(unsigned short)arg1 data:(id)arg2;
- (id)copyDictionary;
- (id)copyInfo:(unsigned short)arg1;
- (id)infoDict;
- (id)init;
- (bool)setInfo:(unsigned short)arg1 data:(id)arg2;
- (void)setInfoDict:(id)arg1;

// Image: /System/Library/Frameworks/CarPlay.framework/CarPlay

- (id)dictionary;
- (id)initWithRouteGuidance:(id)arg1 component:(id)arg2;

@end
