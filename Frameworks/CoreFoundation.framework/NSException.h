
@interface NSException : NSObject <NSCopying, NSSecureCoding> {
    NSString * name;
    NSString * reason;
    id  reserved;
    NSDictionary * userInfo;
}

@property (readonly, copy) NSArray *callStackReturnAddresses;
@property (readonly, copy) NSArray *callStackSymbols;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *reason;
@property (readonly, copy) NSDictionary *userInfo;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)exceptionWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3;
+ (id)exceptionWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3 osLogPack:(void*)arg4 size:(unsigned long long)arg5;
+ (void)raise:(id)arg1 format:(id)arg2;
+ (void)raise:(id)arg1 format:(id)arg2 arguments:(char *)arg3;
+ (bool)supportsSecureCoding;

- (bool)_installStackTraceKeyIfNeeded;
- (bool)_isUnarchived;
- (void)_markAsUnarchived;
- (id)callStackReturnAddresses;
- (id)callStackSymbols;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3;
- (id)initWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3 osLogPack:(void*)arg4 size:(unsigned long long)arg5;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)raise;
- (id)reason;
- (id)redactedDescription;
- (id)userInfo;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)supportsSecureCoding;

- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppAnalytics.framework/AppAnalytics

+ (bool)__aa_tryCatch:(id /* block */)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility

+ (void)bu_raiseWithError:(id)arg1;

- (id)bu_error;

// Image: /System/Library/PrivateFrameworks/GameControllerFoundation.framework/GameControllerFoundation

+ (id)gc_exceptionWithError:(id)arg1;
+ (id)gc_exceptionWithName:(id)arg1 error:(id)arg2;

- (id)gc_error;

// Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry

- (id)nr_safeDescription;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (void)sfu_errnoRaise:(id)arg1 format:(id)arg2;
+ (void)tsu_raiseWithError:(id)arg1;

- (int)sfu_localErrno;
- (id)tsu_error;

// Image: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync

- (id)psy_safeDescription;

// Image: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation

- (id)error;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

+ (void)errnoRaise:(id)arg1 format:(id)arg2;
+ (void)tsu_raiseWithError:(id)arg1;

- (int)localErrno;
- (id)tsu_error;

// Image: /System/Library/PrivateFrameworks/TeaFoundation.framework/TeaFoundation

+ (void)tf_throw:(id)arg1;
+ (bool)tf_tryCatch:(id /* block */)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility

+ (void)raiseLoadXmlException:(id)arg1;
+ (void)raiseNormalizeXmlException:(id)arg1;
+ (void)raiseValidateXmlException:(id)arg1;
+ (void)sfu_errnoRaise:(id)arg1 format:(id)arg2;
+ (bool)tsu_catchExceptionsInBlock:(id /* block */)arg1 error:(id*)arg2;
+ (void)tsu_raiseWithError:(id)arg1;

- (int)sfu_localErrno;
- (id)tsu_error;

@end
