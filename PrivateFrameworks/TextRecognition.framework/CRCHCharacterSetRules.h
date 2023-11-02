
@interface CRCHCharacterSetRules : NSObject {
    NSObject<OS_dispatch_queue> * __charSetRulesQueue;
    NSCharacterSet * _arithmeticOperatorCharSet;
    NSCharacterSet * _containsDotCharSet;
    NSCharacterSet * _dateTimeEndLetterCharSet;
    NSCharacterSet * _dateTimeSeparatorCharSet;
    NSCharacterSet * _digitCharSet;
    NSCharacterSet * _digitEndPunctuationCharSet;
    NSCharacterSet * _digitStartPunctuationCharSet;
    NSCharacterSet * _emailAtCharSet;
    NSCharacterSet * _emailPunctuationCharSet;
    NSCharacterSet * _emoticonBottomCharSet;
    NSCharacterSet * _emoticonMiddleCharSet;
    NSCharacterSet * _emoticonTopCharSet;
    NSCharacterSet * _endPunctuationCharSet;
    NSCharacterSet * _lexiconSkipCharSet;
    NSCharacterSet * _lowercaseCharSet;
    NSCharacterSet * _middlePunctuationCharSet;
    NSCharacterSet * _numeralEndLetterCharSet;
    NSCharacterSet * _prefixCapitalizationExceptionCharSet;
    NSCharacterSet * _selfLoopPunctuationCharSet;
    struct map<unsigned int, int, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, int>>> { 
        struct __tree<std::__value_type<unsigned int, int>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, int>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, int>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, int>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, int>, std::less<unsigned int>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _signatureUniChar;
    NSCharacterSet * _startPunctuationCharSet;
    struct map<unsigned int, unsigned long, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned long>>> { 
        struct __tree<std::__value_type<unsigned int, unsigned long>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, unsigned long>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, unsigned long>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long>, std::less<unsigned int>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _strokeMaxPenalties;
    NSCharacterSet * _uppercaseCharSet;
    NSCharacterSet * _urlPunctuationCharSet;
}

@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *_charSetRulesQueue;
@property (nonatomic, retain) NSCharacterSet *arithmeticOperatorCharSet;
@property (nonatomic, retain) NSCharacterSet *containsDotCharSet;
@property (nonatomic, retain) NSCharacterSet *dateTimeEndLetterCharSet;
@property (nonatomic, retain) NSCharacterSet *dateTimeSeparatorCharSet;
@property (nonatomic, retain) NSCharacterSet *digitCharSet;
@property (nonatomic, retain) NSCharacterSet *digitEndPunctuationCharSet;
@property (nonatomic, retain) NSCharacterSet *digitStartPunctuationCharSet;
@property (nonatomic, retain) NSCharacterSet *emailAtCharSet;
@property (nonatomic, retain) NSCharacterSet *emailPunctuationCharSet;
@property (nonatomic, retain) NSCharacterSet *emoticonBottomCharSet;
@property (nonatomic, retain) NSCharacterSet *emoticonMiddleCharSet;
@property (nonatomic, retain) NSCharacterSet *emoticonTopCharSet;
@property (nonatomic, retain) NSCharacterSet *endPunctuationCharSet;
@property (nonatomic, retain) NSCharacterSet *lexiconSkipCharSet;
@property (nonatomic, retain) NSCharacterSet *lowercaseCharSet;
@property (nonatomic, retain) NSCharacterSet *middlePunctuationCharSet;
@property (nonatomic, retain) NSCharacterSet *numeralEndLetterCharSet;
@property (nonatomic, retain) NSCharacterSet *prefixCapitalizationExceptionCharSet;
@property (nonatomic, retain) NSCharacterSet *selfLoopPunctuationCharSet;
@property (nonatomic) /* Warning: unhandled struct encoding: '{map<unsigned int' */ struct  signatureUniChar; /* unknown property attribute:  std::less<unsigned int>>>=Q}}} */
@property (nonatomic, retain) NSCharacterSet *startPunctuationCharSet;
@property (nonatomic) /* Warning: unhandled struct encoding: '{map<unsigned int' */ struct  strokeMaxPenalties; /* unknown property attribute:  std::less<unsigned int>>>=Q}}} */
@property (nonatomic, retain) NSCharacterSet *uppercaseCharSet;
@property (nonatomic, retain) NSCharacterSet *urlPunctuationCharSet;

+ (unsigned long long)characterType:(unsigned int)arg1;
+ (unsigned long long)expectedMaxStrokeCount:(unsigned int)arg1;
+ (unsigned long long)expectedMinStrokeCount:(unsigned int)arg1;
+ (id)sharedCharacterSetRules;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_charSetRulesQueue;
- (unsigned long long)_characterType:(unsigned int)arg1;
- (unsigned long long)_expectedMaxStrokeCount:(unsigned int)arg1;
- (unsigned long long)_expectedMinStrokeCount:(unsigned int)arg1;
- (id)arithmeticOperatorCharSet;
- (id)containsDotCharSet;
- (id)dateTimeEndLetterCharSet;
- (id)dateTimeSeparatorCharSet;
- (void)dealloc;
- (id)digitCharSet;
- (id)digitEndPunctuationCharSet;
- (id)digitStartPunctuationCharSet;
- (id)emailAtCharSet;
- (id)emailPunctuationCharSet;
- (id)emoticonBottomCharSet;
- (id)emoticonMiddleCharSet;
- (id)emoticonTopCharSet;
- (id)endPunctuationCharSet;
- (id)init;
- (id)lexiconSkipCharSet;
- (id)lowercaseCharSet;
- (id)middlePunctuationCharSet;
- (id)numeralEndLetterCharSet;
- (id)prefixCapitalizationExceptionCharSet;
- (id)selfLoopPunctuationCharSet;
- (void)setArithmeticOperatorCharSet:(id)arg1;
- (void)setContainsDotCharSet:(id)arg1;
- (void)setDateTimeEndLetterCharSet:(id)arg1;
- (void)setDateTimeSeparatorCharSet:(id)arg1;
- (void)setDigitCharSet:(id)arg1;
- (void)setDigitEndPunctuationCharSet:(id)arg1;
- (void)setDigitStartPunctuationCharSet:(id)arg1;
- (void)setEmailAtCharSet:(id)arg1;
- (void)setEmailPunctuationCharSet:(id)arg1;
- (void)setEmoticonBottomCharSet:(id)arg1;
- (void)setEmoticonMiddleCharSet:(id)arg1;
- (void)setEmoticonTopCharSet:(id)arg1;
- (void)setEndPunctuationCharSet:(id)arg1;
- (void)setLexiconSkipCharSet:(id)arg1;
- (void)setLowercaseCharSet:(id)arg1;
- (void)setMiddlePunctuationCharSet:(id)arg1;
- (void)setNumeralEndLetterCharSet:(id)arg1;
- (void)setPrefixCapitalizationExceptionCharSet:(id)arg1;
- (void)setSelfLoopPunctuationCharSet:(id)arg1;
- (void)setSignatureUniChar:(struct map<unsigned int, int, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, int>>> { struct __tree<std::__value_type<unsigned int, int>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, int>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, int>>> { void *x_1_1_1; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, int>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, int>, std::less<unsigned int>>> { unsigned long long x_3_2_1; } x_1_1_3; } x1; })arg1;
- (void)setStartPunctuationCharSet:(id)arg1;
- (void)setStrokeMaxPenalties:(struct map<unsigned int, unsigned long, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned long>>> { struct __tree<std::__value_type<unsigned int, unsigned long>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, unsigned long>>> { void *x_1_1_1; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, unsigned long>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long>, std::less<unsigned int>>> { unsigned long long x_3_2_1; } x_1_1_3; } x1; })arg1;
- (void)setUppercaseCharSet:(id)arg1;
- (void)setUrlPunctuationCharSet:(id)arg1;
- (struct map<unsigned int, int, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, int>>> { struct __tree<std::__value_type<unsigned int, int>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, int>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, int>>> { void *x_1_1_1; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, int>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, int>, std::less<unsigned int>>> { unsigned long long x_3_2_1; } x_1_1_3; } x1; })signatureUniChar;
- (id)startPunctuationCharSet;
- (struct map<unsigned int, unsigned long, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned long>>> { struct __tree<std::__value_type<unsigned int, unsigned long>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, unsigned long>>> { void *x_1_1_1; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, unsigned long>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long>, std::less<unsigned int>>> { unsigned long long x_3_2_1; } x_1_1_3; } x1; })strokeMaxPenalties;
- (id)uppercaseCharSet;
- (id)urlPunctuationCharSet;

@end
