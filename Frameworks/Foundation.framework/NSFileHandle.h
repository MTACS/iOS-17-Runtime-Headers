
@interface NSFileHandle : NSObject <BSXPCSecureCoding, NSSecureCoding>

@property (readonly, copy) NSData *availableData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long offsetInFile;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)fileHandleForReadingAtPath:(id)arg1;
+ (id)fileHandleForReadingFromURL:(id)arg1 error:(id*)arg2;
+ (id)fileHandleForReadingFromURL:(id)arg1 mode:(unsigned short)arg2 error:(id*)arg3;
+ (id)fileHandleForUpdatingAtPath:(id)arg1;
+ (id)fileHandleForUpdatingURL:(id)arg1 error:(id*)arg2;
+ (id)fileHandleForUpdatingURL:(id)arg1 mode:(unsigned short)arg2 error:(id*)arg3;
+ (id)fileHandleForWritingAtPath:(id)arg1;
+ (id)fileHandleForWritingToURL:(id)arg1 error:(id*)arg2;
+ (id)fileHandleForWritingToURL:(id)arg1 mode:(unsigned short)arg2 error:(id*)arg3;
+ (id)fileHandleWithNullDevice;
+ (id)fileHandleWithStandardError;
+ (id)fileHandleWithStandardInput;
+ (id)fileHandleWithStandardOutput;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void)_closeOnDealloc;
- (id)availableData;
- (Class)classForCoder;
- (bool)closeAndReturnError:(out id*)arg1;
- (void)closeFile;
- (void)encodeWithCoder:(id)arg1;
- (int)fileDescriptor;
- (bool)getOffset:(out unsigned long long*)arg1 error:(out id*)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileDescriptor:(int)arg1;
- (id)initWithFileDescriptor:(int)arg1 closeOnDealloc:(bool)arg2;
- (id)initWithPath:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3;
- (id)initWithPath:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 error:(id*)arg4;
- (id)initWithURL:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 error:(id*)arg4;
- (unsigned long long)offsetInFile;
- (id)readDataOfLength:(unsigned long long)arg1;
- (id)readDataToEndOfFile;
- (id)readDataToEndOfFileAndReturnError:(out id*)arg1;
- (id)readDataUpToLength:(unsigned long long)arg1 error:(out id*)arg2;
- (id /* block */)readabilityHandler;
- (unsigned long long)seekToEndOfFile;
- (bool)seekToEndReturningOffset:(out unsigned long long*)arg1 error:(out id*)arg2;
- (void)seekToFileOffset:(unsigned long long)arg1;
- (bool)seekToOffset:(unsigned long long)arg1 error:(out id*)arg2;
- (void)setReadabilityHandler:(id /* block */)arg1;
- (void)setWriteabilityHandler:(id /* block */)arg1;
- (bool)synchronizeAndReturnError:(out id*)arg1;
- (void)synchronizeFile;
- (bool)truncateAtOffset:(unsigned long long)arg1 error:(out id*)arg2;
- (void)truncateFileAtOffset:(unsigned long long)arg1;
- (void)writeData:(id)arg1;
- (bool)writeData:(id)arg1 error:(out id*)arg2;
- (id /* block */)writeabilityHandler;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (bool)hk_enumerateLinesWithError:(id*)arg1 handler:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (void)writeCommaSeparatedValues:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit

+ (id)fileHandleForCreatingURL:(id)arg1 protection:(id)arg2 error:(id*)arg3;

- (bool)isOpenForUpdating;

// Image: /System/Library/PrivateFrameworks/ChronoUIServices.framework/ChronoUIServices

+ (bool)supportsBSXPCSecureCoding;

- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (void)writeString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP

- (bool)uarpCloseAndReturnError:(out id*)arg1;
- (id)uarpReadDataToEndOfFileAndReturnError:(out id*)arg1;
- (id)uarpReadDataUpToLength:(unsigned long long)arg1 error:(out id*)arg2;
- (bool)uarpSeekToEndReturningOffset:(out unsigned long long*)arg1 error:(out id*)arg2;
- (bool)uarpSeekToOffset:(unsigned long long)arg1 error:(out id*)arg2;
- (bool)uarpWriteData:(id)arg1 error:(out id*)arg2;
- (bool)writeBytes:(const void*)arg1 length:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/DVTInstrumentsUtilities.framework/DVTInstrumentsUtilities

- (bool)xr_writeStringWithFormat:(id)arg1;

// Image: /System/Library/PrivateFrameworks/EAFirmwareUpdater.framework/EAFirmwareUpdater

- (bool)uarpCloseAndReturnError:(out id*)arg1;
- (id)uarpReadDataToEndOfFileAndReturnError:(out id*)arg1;
- (id)uarpReadDataUpToLength:(unsigned long long)arg1 error:(out id*)arg2;
- (bool)uarpSeekToEndReturningOffset:(out unsigned long long*)arg1 error:(out id*)arg2;
- (bool)uarpSeekToOffset:(unsigned long long)arg1 error:(out id*)arg2;
- (bool)uarpWriteData:(id)arg1 error:(out id*)arg2;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (bool)hk_readValue:(void*)arg1 ofSize:(unsigned long long)arg2 error:(id*)arg3;
- (bool)hk_writeValue:(const void*)arg1 size:(unsigned long long)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary

- (void)ml_lock;
- (void)ml_unlock;

// Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices

- (id)prs_mappedData;

// Image: /System/Library/PrivateFrameworks/UARPiCloud.framework/UARPiCloud

- (bool)uarpCloseAndReturnError:(out id*)arg1;
- (id)uarpReadDataToEndOfFileAndReturnError:(out id*)arg1;
- (id)uarpReadDataUpToLength:(unsigned long long)arg1 error:(out id*)arg2;
- (bool)uarpSeekToEndReturningOffset:(out unsigned long long*)arg1 error:(out id*)arg2;
- (bool)uarpSeekToOffset:(unsigned long long)arg1 error:(out id*)arg2;
- (bool)uarpWriteData:(id)arg1 error:(out id*)arg2;

// Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer

- (id)uns_secureFileURL;

// Image: /usr/lib/libauthinstall.dylib

- (bool)uarpCloseAndReturnError:(out id*)arg1;
- (id)uarpReadDataToEndOfFileAndReturnError:(out id*)arg1;
- (id)uarpReadDataUpToLength:(unsigned long long)arg1 error:(out id*)arg2;
- (bool)uarpSeekToEndReturningOffset:(out unsigned long long*)arg1 error:(out id*)arg2;
- (bool)uarpSeekToOffset:(unsigned long long)arg1 error:(out id*)arg2;
- (bool)uarpWriteData:(id)arg1 error:(out id*)arg2;
- (bool)writeBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (bool)writeBytes:(const void*)arg1 length:(unsigned long long)arg2;

@end
