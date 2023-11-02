
@interface NSKeyedArchiver : NSCoder {
    const struct __CFKeyedArchiverUID {} ** _cache;
    unsigned long long  _cacheSize;
    struct __CFDictionary { } * _classNameMap;
    struct __CFDictionary { } * _classes;
    struct __CFDictionary { } * _conditionals;
    NSMutableArray * _containers;
    <NSKeyedArchiverDelegate> * _delegate;
    unsigned long long  _estimatedCount;
    _Atomic unsigned long long  _flags;
    unsigned long long  _genericKey;
    struct __CFDictionary { } * _objRefMap;
    NSMutableArray * _objects;
    unsigned long long  _pac_signature;
    struct __CFDictionary { } * _replacementMap;
    void * _stream;
    struct __CFSet { } * _visited;
}

@property <NSKeyedArchiverDelegate> *delegate;
@property (readonly) NSData *encodedData;
@property unsigned long long outputFormat;
@property bool requiresSecureCoding;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)archiveRootObject:(id)arg1 toFile:(id)arg2;
+ (id)archivedDataWithRootObject:(id)arg1;
+ (id)archivedDataWithRootObject:(id)arg1 requiringSecureCoding:(bool)arg2 error:(id*)arg3;
+ (id)classNameForClass:(Class)arg1;
+ (void)initialize;
+ (void)setClassName:(id)arg1 forClass:(Class)arg2;

- (bool)_allowsValueCoding;
- (id)_blobForCurrentObject;
- (void)_encodeArrayOfObjects:(id)arg1 forKey:(id)arg2;
- (void)_encodePropertyList:(id)arg1 forKey:(id)arg2;
- (id)_initWithOutput:(id)arg1;
- (void)_setBlobForCurrentObject:(id)arg1;
- (bool)allowsKeyedCoding;
- (id)classNameForClass:(Class)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)encodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(const void*)arg3;
- (void)encodeBool:(bool)arg1 forKey:(id)arg2;
- (void)encodeBycopyObject:(id)arg1;
- (void)encodeByrefObject:(id)arg1;
- (void)encodeBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;
- (void)encodeConditionalObject:(id)arg1;
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;
- (void)encodeDataObject:(id)arg1;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodeRootObject:(id)arg1;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void*)arg2;
- (void)encodeValuesOfObjCTypes:(const char *)arg1;
- (id)encodedData;
- (void)finishEncoding;
- (id)init;
- (id)initForWritingWithMutableData:(id)arg1;
- (id)initRequiringSecureCoding:(bool)arg1;
- (unsigned long long)outputFormat;
- (void)replaceObject:(id)arg1 withObject:(id)arg2;
- (bool)requiresSecureCoding;
- (void)setClassName:(id)arg1 forClass:(Class)arg2;
- (void)setDelegate:(id)arg1;
- (void)setOutputFormat:(unsigned long long)arg1;
- (void)setRequiresSecureCoding:(bool)arg1;
- (unsigned int)systemVersion;
- (long long)versionForClassName:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference

+ (id)newSecureArchivedDataWithRootObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation

+ (id)CalArchivedDataWithRootObject:(id)arg1 ofClasses:(id)arg2 error:(id*)arg3;
+ (id)CalArchivedDataWithRootObject:(id)arg1 ofClasses:(id)arg2 strict:(bool)arg3 error:(id*)arg4;

// Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst

+ (id)cat_archivedDataWithRootObject:(id)arg1;
+ (id)cat_archivedDataWithRootObject:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

+ (id)cpl_archivedDataWithRootObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

+ (id)wf_securelyArchivedDataWithRootObject:(id)arg1;
+ (id)wf_securelyArchivedDataWithRootObject:(id)arg1 deletionResponsibility:(long long)arg2;
+ (id)wf_securelyArchivedDataWithRootObject:(id)arg1 fileCoder:(id)arg2;

// Image: /System/Library/PrivateFrameworks/DVTInstrumentsUtilities.framework/DVTInstrumentsUtilities

+ (id)xr_archiveSecureCodingObject:(id)arg1 withError:(id*)arg2;
+ (id)xr_deepCopy:(id)arg1;
+ (id)xr_deepCopy:(id)arg1 classes:(id)arg2;

// Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared

+ (id)_et_secureArchivedDataWithRootObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer

+ (id)dnds_secureLegacyArchiver;

// Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry

+ (bool)nr_secureArchiveRootObject:(id)arg1 toFile:(id)arg2;
+ (bool)nr_secureArchiveRootObject:(id)arg1 toFile:(id)arg2 withOptions:(unsigned long long)arg3;
+ (id)nr_secureArchivedDataWithRootObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync

+ (bool)secureArchiveRootObject:(id)arg1 toFile:(id)arg2;
+ (bool)secureArchiveRootObject:(id)arg1 toFile:(id)arg2 withOptions:(unsigned long long)arg3;
+ (id)secureArchivedDataWithRootObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud

+ (id)ic_archivedDataWithRootUserIdentity:(id)arg1 inStore:(id)arg2 requiringSecureCoding:(bool)arg3 error:(id*)arg4;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility

+ (id)tsu_securelyArchiveRoot:(id)arg1;

@end
