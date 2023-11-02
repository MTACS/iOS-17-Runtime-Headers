
@interface NSMutableData : NSData

@property unsigned long long length;
@property (readonly) void*mutableBytes;

// Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth

- (bool)appendCBLTVType:(unsigned char)arg1 bytes:(const void*)arg2 length:(unsigned long long)arg3 error:(id*)arg4;
- (void)appendCBLTVType:(unsigned char)arg1 sint64:(long long)arg2;
- (void)appendCBLTVType:(unsigned char)arg1 uint64:(unsigned long long)arg2;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_newZeroingDataWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)dataWithCapacity:(unsigned long long)arg1;
+ (id)dataWithLength:(unsigned long long)arg1;

- (bool)_compressUsingCompressionAlgorithm:(int)arg1 error:(id*)arg2;
- (bool)_decompressUsingCompressionAlgorithm:(int)arg1 error:(id*)arg2;
- (bool)_isCompact;
- (void)appendBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (void)appendData:(id)arg1;
- (Class)classForCoder;
- (bool)compressUsingAlgorithm:(long long)arg1 error:(id*)arg2;
- (bool)decompressUsingAlgorithm:(long long)arg1 error:(id*)arg2;
- (void)increaseLengthBy:(unsigned long long)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithLength:(unsigned long long)arg1;
- (void*)mutableBytes;
- (void)replaceBytesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withBytes:(const void*)arg2;
- (void)replaceBytesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withBytes:(const void*)arg2 length:(unsigned long long)arg3;
- (void)resetBytesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setData:(id)arg1;
- (void)setLength:(unsigned long long)arg1;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (void)hk_appendBytesWithUUID:(id)arg1;
- (void)hk_appendUUIDBytes:(unsigned char)arg1;

// Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy

- (void)abAppendString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP

- (void)appendByte:(unsigned char)arg1;
- (void)appendLittleInt16:(unsigned short)arg1;
- (void)appendLittleInt32:(unsigned int)arg1;

// Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation

- (void)ef_deleteBytesInData:(id)arg1 beforeOccurrencesOfData:(id)arg2;
- (void)ef_deleteBytesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)ef_replaceContiguousSequencesOfBytesInData:(id)arg1 withData:(id)arg2;

// Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI

- (void)fiui_appendHeartRate:(double)arg1 date:(id)arg2;
- (double)fiui_weightedAverageHeartRateWithStartDate:(id)arg1 endDate:(id)arg2;

// Image: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle

+ (id)dataWithRandomBytes:(int)arg1;

- (void)replaceTrailingWith7LSB:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/MIME.framework/MIME

- (void)mf_appendCString:(const char *)arg1;
- (void)mf_appendRFC2231CompliantValue:(id)arg1 forKey:(id)arg2;
- (void)mf_convertNetworkLineEndingsToUnix;
- (void)mf_convertNetworkLineEndingsToUnixInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)mf_makeImmutable;

// Image: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection

- (void)appendDataAndSize:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MobileStorage.framework/MobileStorage

+ (id)dataWithHexString:(id)arg1;

- (id)initDataWithHexString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NeuralNetworks.framework/NeuralNetworks

- (void)appendScalar:(id)arg1 dataType:(unsigned long long)arg2;
- (void)appendScalars:(id)arg1 dataType:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

- (void)appendLELong:(int)arg1;
- (void)appendLEShort:(short)arg1;
- (void)appendString:(id)arg1 encoding:(unsigned long long)arg2;
- (void)replaceBytesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withLELong:(int)arg2;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSPersistence.framework/TSPersistence

- (void)tsp_appendDispatchData:(id)arg1;

// Image: /usr/lib/libSESShared.dylib

- (void)appendU16BE:(unsigned short)arg1;
- (void)appendU16LE:(unsigned short)arg1;
- (void)appendU32BE:(unsigned int)arg1;
- (void)appendU32LE:(unsigned int)arg1;
- (void)appendU64BE:(unsigned long long)arg1;
- (void)appendU64LE:(unsigned long long)arg1;
- (void)appendU8:(unsigned char)arg1;

// Image: /usr/lib/libauthinstall.dylib

- (void)appendByte:(unsigned char)arg1;
- (void)appendLittleInt16:(unsigned short)arg1;
- (void)appendLittleInt32:(unsigned int)arg1;

@end
