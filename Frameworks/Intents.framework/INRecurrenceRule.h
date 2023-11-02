
@interface INRecurrenceRule : NSObject <CMSCoding, NSCopying, NSSecureCoding> {
    long long  _frequency;
    unsigned long long  _interval;
    unsigned long long  _weeklyRecurrenceDays;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long frequency;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long interval;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long weeklyRecurrenceDays;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (bool)supportsSecureCoding;

- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)frequency;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithInterval:(unsigned long long)arg1 frequency:(long long)arg2;
- (id)initWithInterval:(unsigned long long)arg1 frequency:(long long)arg2 weeklyRecurrenceDays:(unsigned long long)arg3;
- (unsigned long long)interval;
- (bool)isEqual:(id)arg1;
- (unsigned long long)weeklyRecurrenceDays;

// Image: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit

+ (id)instanceFromCMSCoded:(id)arg1;

- (id)cmsCoded;

// Image: /System/Library/PrivateFrameworks/RemindersUICore.framework/RemindersUICore

+ (id)rem_recurrenceRuleWithInterval:(long long)arg1 frequency:(long long)arg2;

@end
