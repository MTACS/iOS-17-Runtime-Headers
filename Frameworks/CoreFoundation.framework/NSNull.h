
@interface NSNull : NSObject <AADataType, AFSecurityDigestibleChunksProviding, BMDSLNativeJSONArchiving, CAAction, CKVDatabaseValue, CMSCoding, EFSQLBindable, EFSQLValueExpressable, GCSJSONObject, HAP2AccessoryCharacteristicEncodableBodyValue, HMDOPACKValue, IMJSONSerializableValueProviding, MGRemoteQueryDecodable, MPCPlaybackEngineEventPayloadValueJSONConvertible, NSCopying, NSSecureCoding, PQLBindable, REDonatedActionIdentifierProviding, SiriCoreSQLiteValue, TSDMixing, TSDPathPainter, TSSPropertyValueArchiving, WFJSONObject, WFJavaScriptCoreBridgeableObject, _AFBundleResourceURLProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) EFSQLBinding *ef_SQLBinding;
@property (nonatomic, readonly, copy) NSString *ef_SQLExpression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)null;
+ (bool)supportsSecureCoding;

- (unsigned long long)_cfTypeID;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (void)ck_bindInStatement:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)cksqlcs_bindBlob:(struct sqlite3_stmt { }*)arg1 index:(int)arg2 db:(id)arg3;
- (id)cksqlcs_bindInt64:(struct sqlite3_stmt { }*)arg1 index:(int)arg2 db:(id)arg3;
- (id)cksqlcs_bindText:(struct sqlite3_stmt { }*)arg1 index:(int)arg2 db:(id)arg3;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)valueForKey:(id)arg1;

// Image: /System/Library/Frameworks/Intents.framework/Intents

- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)_mapkit_fakeNil;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

- (id)CAMLType;
- (void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3;

// Image: /System/Library/PrivateFrameworks/APFoundation.framework/APFoundation

- (id)jsonRepresentationWithOptions:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/AppAnalytics.framework/AppAnalytics

- (id)toJsonValueAndReturnError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (void)af_enumerateDigestibleChunksWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)af_getBundleResourceURL;

// Image: /System/Library/PrivateFrameworks/BiomeDSL.framework/BiomeDSL

+ (void)bmdsl_nativeSupportForEncodingAsJSON;

// Image: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit

+ (id)instanceFromCMSCoded:(id)arg1;

- (id)cmsCoded;

// Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge

- (id)databaseValue_toData;
- (id)databaseValue_toNumber;
- (id)databaseValue_toString;
- (long long)databaseValue_type;

// Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation

- (id)ef_SQLBinding;
- (id)ef_SQLExpression;
- (id)ef_SQLIsolatedExpression;
- (void)ef_renderSQLExpressionInto:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MediaGroupsDaemon.framework/MediaGroupsDaemon

+ (id)rq_instanceFromCoded:(id)arg1;

- (id)rq_coded;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)payloadValueFromJSONValue:(id)arg1;

- (id)mpc_jsonValue;

// Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary

- (void)ml_bindToSQLiteStatement:(struct sqlite3_stmt { }*)arg1 atPosition:(int)arg2;
- (id)ml_stringValueForSQL;

// Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore

- (void)nu_updateDigest:(id)arg1;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

- (void)sfu_appendJsonStringToString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation

- (id)im_jsonSerializableValue;

// Image: /System/Library/PrivateFrameworks/PosterBoard.framework/PosterBoard

- (id)pbf_valueForSQLiteQuery;

// Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine

- (unsigned long long)re_actionIdentifierHashValue;

// Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore

- (id)siriCoreSQLiteValue_escapedString:(bool)arg1;
- (id)siriCoreSQLiteValue_toData;
- (id)siriCoreSQLiteValue_toNumber;
- (id)siriCoreSQLiteValue_toString;
- (long long)siriCoreSQLiteValue_type;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (void)paintPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

- (void)appendJsonStringToString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts

- (void)tsch_saveToArchive:(void*)arg1 archiver:(id)arg2;
- (void)tsch_saveToProtobufString:(void*)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables

- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (void)paintPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSStyles.framework/TSStyles

+ (id)instanceWithArchive:(const struct Message { int (**x1)(); struct InternalMetadata { void *x_2_1_1; } x2; }*)arg1 unarchiver:(id)arg2;

- (id)initWithArchive:(const struct Message { int (**x1)(); struct InternalMetadata { void *x_2_1_1; } x2; }*)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct Message { int (**x1)(); struct InternalMetadata { void *x_2_1_1; } x2; }*)arg1 archiver:(id)arg2;

// Image: /usr/lib/libprequelite.dylib

- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

@end
