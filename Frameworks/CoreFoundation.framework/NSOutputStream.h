
@interface NSOutputStream : NSStream {
    unsigned char  _reserved;
}

@property (readonly) bool hasSpaceAvailable;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)outputStreamToBuffer:(char *)arg1 capacity:(unsigned long long)arg2;
+ (id)outputStreamToFileAtPath:(id)arg1 append:(bool)arg2;
+ (id)outputStreamToMemory;
+ (id)outputStreamWithURL:(id)arg1 append:(bool)arg2;

- (struct { long long x1; int x2; })_cfStreamError;
- (unsigned long long)_cfTypeID;
- (void)dealloc;
- (bool)hasSpaceAvailable;
- (id)initToBuffer:(char *)arg1 capacity:(unsigned long long)arg2;
- (id)initToMemory;
- (id)initWithURL:(id)arg1 append:(bool)arg2;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/DVTInstrumentsUtilities.framework/DVTInstrumentsUtilities

- (bool)xr_writeStringWithFormat:(id)arg1;

// Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine

- (void)re_writeString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

- (bool)safari_writeNetworkOrderUInt16:(unsigned short)arg1;
- (bool)safari_writeNetworkOrderUInt32:(unsigned int)arg1;

@end
