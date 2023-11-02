
@interface ATXPinnedTimeEvent : NSObject <NSSecureCoding> {
    NSArray * _actions;
    NSDate * _date;
    double  _durationHint;
    long long  _eventType;
    ATXTimeEventIcon * _icon;
    NSData * _iconData;
    NSString * _label;
    ATXTimeEventLocation * _location;
    NSString * _siteName;
    NSString * _sourceBundleIdentifier;
    NSString * _summary;
    NSString * _title;
    NSURL * _url;
    NSUUID * _uuid;
}

@property (nonatomic, readonly, copy) NSArray *actions;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) double durationHint;
@property (nonatomic, readonly) long long eventType;
@property (nonatomic, readonly, copy) ATXTimeEventIcon *icon;
@property (nonatomic, readonly, copy) NSData *iconData;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) ATXTimeEventLocation *location;
@property (nonatomic, readonly, copy) NSString *siteName;
@property (nonatomic, readonly, copy) NSString *sourceBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *summary;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly, copy) NSUUID *uuid;

+ (bool)supportsSecureCoding;
+ (id)uniformType;

- (void).cxx_destruct;
- (id)actions;
- (id)date;
- (double)durationHint;
- (void)encodeWithCoder:(id)arg1;
- (long long)eventType;
- (id)icon;
- (id)iconData;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 location:(id)arg3 sourceBundleIdentifier:(id)arg4 durationHint:(double)arg5 actions:(id)arg6;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 location:(id)arg3 sourceBundleIdentifier:(id)arg4 durationHint:(double)arg5 actions:(id)arg6 date:(id)arg7 label:(id)arg8;
- (id)initWithURL:(id)arg1 sourceBundleIdentifier:(id)arg2 iconData:(id)arg3 title:(id)arg4 summary:(id)arg5 location:(id)arg6 siteName:(id)arg7 durationHint:(double)arg8 actions:(id)arg9;
- (id)label;
- (id)location;
- (id)siteName;
- (id)sourceBundleIdentifier;
- (id)summary;
- (id)title;
- (id)url;
- (id)uuid;

@end
