
@interface CSItemSummary : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _allEmailAddresses;
    NSArray * _alternateNames;
    NSString * _attachmentQuery;
    long long  _attachmentScope;
    NSString * _contactIdentifier;
    long long  _contactScope;
    NSDate * _dateFrom;
    NSDate * _dateTo;
    NSArray * _emailAddresses;
    NSString * _name;
    NSPersonNameComponents * _nameComponents;
    NSArray * _phoneNumbers;
    NSString * _senderContainsQuery;
    long long  _senderContainsScope;
    NSString * _senderContainsSearchString;
    CSSearchableItem * _sourceItem;
    long long  _statusValue;
    NSString * _textQuery;
    long long  _textScope;
    NSString * _type;
}

@property (nonatomic, readonly) CSSearchableItem *sourceItem;
@property (nonatomic, readonly) NSString *type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allEmailAddresses;
- (id)alternateNames;
- (id)attachmentQuery;
- (long long)attachmentScope;
- (id)contactIdentifier;
- (long long)contactScope;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateFrom;
- (id)dateTo;
- (id)emailAddresses;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAttachmentQuery:(id)arg1 attachmentScope:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateFrom:(id)arg1 dateTo:(id)arg2;
- (id)initWithItemSummary:(id)arg1 newContactScope:(long long)arg2;
- (id)initWithItemSummaryType:(id)arg1;
- (id)initWithName:(id)arg1 contactIdentifier:(id)arg2 alternateNames:(id)arg3 phoneNumbers:(id)arg4 emailAddresses:(id)arg5 allEmailAddresses:(id)arg6 contactScope:(long long)arg7;
- (id)initWithName:(id)arg1 contactIdentifier:(id)arg2 alternateNames:(id)arg3 phoneNumbers:(id)arg4 emailAddresses:(id)arg5 allEmailAddresses:(id)arg6 nameComponents:(id)arg7 contactScope:(long long)arg8;
- (id)initWithName:(id)arg1 contactIdentifier:(id)arg2 alternateNames:(id)arg3 phoneNumbers:(id)arg4 emailAddresses:(id)arg5 contactScope:(long long)arg6;
- (id)initWithSenderContainsQuery:(id)arg1 senderContainsSearchString:(id)arg2 senderContainsScope:(long long)arg3;
- (id)initWithStatus:(long long)arg1;
- (id)initWithTextQuery:(id)arg1 textScope:(long long)arg2;
- (id)name;
- (id)nameComponents;
- (id)phoneNumbers;
- (id)senderContainsQuery;
- (long long)senderContainsScope;
- (id)senderContainsSearchString;
- (void)setNameComponents:(id)arg1;
- (id)sourceItem;
- (long long)statusValue;
- (id)textQuery;
- (long long)textScope;
- (id)type;

@end
