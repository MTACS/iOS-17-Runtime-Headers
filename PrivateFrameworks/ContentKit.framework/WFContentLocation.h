
@interface WFContentLocation : NSObject <NSCopying, NSSecureCoding, WFSerializableContent> {
    NSString * _identifier;
    NSString * _localizedTitle;
    unsigned long long  _promptingBehaviour;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WFIcon *icon;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic, readonly) unsigned long long promptingBehaviour;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

+ (id)airdropLocation;
+ (id)allContentLocationClasses;
+ (id)appDescriptorForFileProviderHandlingURL:(id)arg1 error:(id*)arg2;
+ (id)appleScriptLocation;
+ (id)cellularDataStatisticsLocation;
+ (id)clipboardLocation;
+ (id)contentLocationForFile:(id)arg1;
+ (id)dataRoamingLocation;
+ (id)defaultLineLocation;
+ (id)focusLocation;
+ (id)genericLocation;
+ (void)getContentLocationFromFile:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)javaScriptForAutomationLocation;
+ (id)locationLocation;
+ (id)locationWithCalendarSource:(id)arg1;
+ (id)locationWithNotesAccountIdentifier:(id)arg1;
+ (id)microphoneLocation;
+ (id)networkLocation;
+ (id)notificationLocation;
+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (id)onScreenContentLocation;
+ (id)personalHotspotPasswordLocation;
+ (id)printLocation;
+ (id)screenshotLocation;
+ (id)shareExtensionLocation;
+ (id)shellLocation;
+ (id)shortcutsAppLocation;
+ (id)speechRecognitionLocation;
+ (bool)supportsSecureCoding;
+ (id)toggleLineLocation;
+ (id)wallpaperLocation;
+ (id)webpagesLocation;
+ (id)windowsLocation;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 promptingBehaviour:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)localizedMDMDescription;
- (id)localizedTitle;
- (unsigned long long)managedLevel;
- (bool)matches:(id)arg1;
- (unsigned long long)promptingBehaviour;
- (id)wfSerializedRepresentation;

// Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI

- (id)icon;

@end
