
@interface CALNNotificationCategory : NSObject <NSCopying> {
    NSArray * _actions;
    NSString * _categorySummaryFormat;
    NSString * _hiddenPreviewsBodyPlaceholder;
    NSString * _identifier;
    unsigned long long  _options;
}

@property (nonatomic, readonly, copy) NSArray *actions;
@property (nonatomic, readonly, copy) NSString *categorySummaryFormat;
@property (nonatomic, readonly, copy) NSString *hiddenPreviewsBodyPlaceholder;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) unsigned long long options;

+ (id)categoryWithIdentifier:(id)arg1 actions:(id)arg2 hiddenPreviewsBodyPlaceholder:(id)arg3 options:(unsigned long long)arg4;
+ (id)categoryWithIdentifier:(id)arg1 actions:(id)arg2 hiddenPreviewsBodyPlaceholder:(id)arg3 options:(unsigned long long)arg4 categorySummaryFormat:(id)arg5;

- (void).cxx_destruct;
- (id)actions;
- (id)categorySummaryFormat;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)hiddenPreviewsBodyPlaceholder;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 actions:(id)arg2 hiddenPreviewsBodyPlaceholder:(id)arg3 options:(unsigned long long)arg4 categorySummaryFormat:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCategory:(id)arg1;
- (unsigned long long)options;

@end
