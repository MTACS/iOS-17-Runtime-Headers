
@interface NSProcessInfo : NSObject {
    NSArray * arguments;
    long long  automaticTerminationOptOutCounter;
    NSDictionary * environment;
    NSString * hostName;
    NSString * name;
}

@property (getter=AD_isRunningTests, nonatomic, readonly) bool AD_runningTests;
@property (readonly) unsigned long long activeProcessorCount;
@property (nonatomic, readonly) bool an_isAutoPlaybackProcess;
@property (readonly, copy) NSArray *arguments;
@property (nonatomic, readonly) double ask_launchTime;
@property bool automaticTerminationSupportEnabled;
@property (getter=crk_isBeingTested, nonatomic, readonly) bool crk_beingTested;
@property (readonly, copy) NSDictionary *environment;
@property (readonly, copy) NSString *fullUserName;
@property (readonly, copy) NSString *globallyUniqueString;
@property (readonly, copy) NSString *hostName;
@property (getter=isiOSAppOnMac, readonly) bool iOSAppOnMac;
@property (nonatomic, readonly) bool ic_isCloudDaemon;
@property (getter=isMacCatalystApp, readonly) bool macCatalystApp;
@property (readonly) struct { long long x1; long long x2; long long x3; } operatingSystemVersion;
@property (readonly, copy) NSString *operatingSystemVersionString;
@property (readonly) unsigned long long physicalMemory;
@property (readonly) int processIdentifier;
@property (copy) NSString *processName;
@property (readonly) unsigned long long processorCount;
@property (getter=isRunningTests, nonatomic, readonly) bool runningTests;
@property (nonatomic, readonly, copy) NSString *safari_deviceUDID;
@property (nonatomic, readonly, copy) NSString *safari_operatingSystemVersionString;
@property (nonatomic, readonly) bool safari_systemSupportsBookmarkDAVMoves;
@property (readonly) double systemUptime;
@property (readonly, copy) NSString *userName;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)processInfo;

- (void)_disableAutomaticTerminationOnly:(id)arg1;
- (void)_enableAutomaticTerminationOnly:(id)arg1;
- (void)_exitIfSuddenTerminationEnabledWithStatus:(int)arg1;
- (void)_exitWhenSuddenTerminationEnabledWithStatus:(int)arg1;
- (void)_reactivateActivity:(id)arg1;
- (long long)_suddenTerminationDisablingCount;
- (unsigned long long)activeProcessorCount;
- (id)arguments;
- (bool)automaticTerminationSupportEnabled;
- (id)beginActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2;
- (id)beginSuspensionOfSystemBehaviors:(unsigned long long)arg1 reason:(id)arg2;
- (void)dealloc;
- (void)disableAutomaticTermination:(id)arg1;
- (void)disableSuddenTermination;
- (void)enableAutomaticTermination:(id)arg1;
- (void)enableSuddenTermination;
- (void)endActivity:(id)arg1;
- (void)endSystemBehaviorSuspension:(id)arg1;
- (id)environment;
- (id)globallyUniqueString;
- (id)hostName;
- (bool)isLowPowerModeEnabled;
- (bool)isMacCatalystApp;
- (bool)isOperatingSystemAtLeastVersion:(struct { long long x1; long long x2; long long x3; })arg1;
- (bool)isTranslated;
- (bool)isiOSAppOnMac;
- (struct { long long x1; long long x2; long long x3; })macCatalystVersion;
- (bool)macCatalystVersionIsAtLeastVersion:(struct { long long x1; long long x2; long long x3; })arg1;
- (unsigned long long)operatingSystem;
- (id)operatingSystemName;
- (struct { long long x1; long long x2; long long x3; })operatingSystemVersion;
- (id)operatingSystemVersionString;
- (void)performActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 block:(id /* block */)arg3;
- (void)performActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)performExpiringActivityWithReason:(id)arg1 usingBlock:(id /* block */)arg2;
- (unsigned long long)physicalMemory;
- (int)processIdentifier;
- (id)processName;
- (unsigned long long)processorCount;
- (void)setArguments:(id)arg1;
- (void)setAutomaticTerminationSupportEnabled:(bool)arg1;
- (void)setProcessName:(id)arg1;
- (double)systemUptime;
- (long long)thermalState;
- (id)userHomeDirectory;
- (id)userName;

// Image: /System/Library/PrivateFrameworks/AACCore.framework/AACCore

- (bool)ae_isBeingTested;

// Image: /System/Library/PrivateFrameworks/APFoundation.framework/APFoundation

+ (bool)isDNUEnabled;

- (bool)isRunningTests;

// Image: /System/Library/PrivateFrameworks/Announce.framework/Announce

- (bool)an_isAutoPlaybackProcess;

// Image: /System/Library/PrivateFrameworks/AppStoreKitInternal.framework/AppStoreKitInternal

- (double)ask_launchTime;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

- (id)bs_jobLabel;

// Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit

- (bool)crk_hasEntitlement:(id)arg1 withValue:(id)arg2;
- (bool)crk_isBeingTested;

// Image: /System/Library/PrivateFrameworks/DVTInstrumentsUtilities.framework/DVTInstrumentsUtilities

+ (bool)isAppleInternal;
+ (bool)isRunningVirtualized;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

- (id)processStartTime;
- (id)systemStartTime;

// Image: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation

- (struct { unsigned int x1[8]; })if_auditToken;

// Image: /System/Library/PrivateFrameworks/MIME.framework/MIME

- (id)mf_thermalStateObservable;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

- (bool)_navigation_isNavd;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (id)fc_processLaunchDate;

// Image: /System/Library/PrivateFrameworks/PromotedContentPrediction.framework/PromotedContentPrediction

+ (bool)isInternalInstall;

- (bool)isRunningTests;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

- (id)_safari_operatingSystemVersionStringFromOperatingSystemVersion:(struct { long long x1; long long x2; long long x3; })arg1;
- (id)safari_deviceUDID;
- (id)safari_operatingSystemVersionString;
- (bool)safari_systemSupportsBookmarkDAVMoves;

// Image: /System/Library/PrivateFrameworks/SearchAds.framework/SearchAds

- (bool)AD_isRunningTests;

// Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud

- (bool)ic_isCloudDaemon;

@end
