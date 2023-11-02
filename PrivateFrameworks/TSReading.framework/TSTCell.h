
@interface TSTCell : NSObject <NSCopying> {
    struct { 
        unsigned int mUnused : 8; 
        unsigned int mValueType : 8; 
        unsigned int mCellFlags : 16; 
        union { 
            double mDouble; 
            struct { 
                unsigned int mID; 
                NSString *mString; 
            } mString; 
            id mDate; 
            /* Warning: Unrecognized filer type: ')' using 'void*' */ void*NSDate; 
            unsigned int mCellStyleID; 
            TSTCellStyle *mCellStyle; 
            unsigned int mTextStyleID; 
            TSWPParagraphStyle *mTextStyle; 
            unsigned int mRichTextPayloadID; 
            TSTRichTextPayload *mRichTextPayload; 
            unsigned int mCommentStorageID; 
            TSDCommentStorage *mCommentStorage; 
            struct { 
                unsigned int mExplicitFormatFlags : 16; 
                unsigned int mCurrentCellFormatID; 
                struct { 
                    int mFormatType; 
                    union { 
                        struct { 
                            NSString *mCurrencyCode; 
                            unsigned int mDecimalPlaces : 8; 
                            unsigned int mNegativeStyle : 3; 
                            unsigned int mShowThousandsSeparator : 1; 
                            unsigned int mUseAccountingStyle : 1; 
                        } mNumberFormatStruct; 
                        struct { 
                            unsigned int mFractionAccuracy : 8; 
                        } mFractionFormatStruct; 
                        struct { 
                            unsigned int mBase : 8; 
                            unsigned int mBasePlaces : 8; 
                            unsigned int mBaseUseMinusSign : 1; 
                        } mBaseFormatStruct; 
                        struct { 
                            unsigned int mSuppressDateFormat : 1; 
                            unsigned int mSuppressTimeFormat : 1; 
                            NSString *mDateTimeFormat; 
                        } mDateFormatStruct; 
                        struct { 
                            unsigned int mUseAutomaticUnits : 1; 
                            int mDurationUnitSmallest; 
                            int mDurationUnitLargest; 
                            int mDurationStyle; 
                        } mDurationFormatStruct; 
                        struct { 
                            unsigned int mCustomFormatID; 
                            struct { /* ? */ } *mData; 
                        } mCustomFormatStruct; 
                        struct { 
                            double mMinimum; 
                            double mMaximum; 
                            double mIncrement; 
                            int mDisplayFormatType; 
                            unsigned int mOrientation : 2; 
                            unsigned int mPosition : 2; 
                        } mControlFormatStruct; 
                        struct { 
                            int mInitialValue; 
                            unsigned int mMultipleChoiceListFormatID; 
                            <TSUMultipleChoiceListChoiceProviding> *mData; 
                        } mMultipleChoiceListFormatStruct; 
                    } ; 
                } mCurrentCellFormat; 
                unsigned int mNumberFormatID; 
                TSUFormatReferenceObject *mNumberFormatRef; 
                unsigned int mCurrencyFormatID; 
                TSUFormatReferenceObject *mCurrencyFormatRef; 
                unsigned int mDurationFormatID; 
                TSUFormatReferenceObject *mDurationFormatRef; 
                unsigned int mDateFormatID; 
                TSUFormatReferenceObject *mDateFormatRef; 
                unsigned int mControlFormatID; 
                TSUFormatReferenceObject *mControlFormatRef; 
                unsigned int mCustomFormatID; 
                TSUFormatReferenceObject *mCustomFormatRef; 
                unsigned int mBaseFormatID; 
                TSUFormatReferenceObject *mBaseFormatRef; 
                unsigned int mMultipleChoiceListFormatID; 
                TSUFormatReferenceObject *mMultipleChoiceListFormatRef; 
            } mCellFormats; 
            unsigned char mStrokePresetNumber; 
        } mValue; 
    }  mPrivate;
}

+ (id)cell;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)inflateFromStorageRef:(struct TSTCellStorage { struct { unsigned char x_1_1_1; unsigned int x_1_1_2 : 8; unsigned int x_1_1_3 : 8; unsigned char x_1_1_4; unsigned int x_1_1_5 : 16; unsigned int x_1_1_6 : 16; unsigned int x_1_1_7 : 16; unsigned int x_1_1_8 : 16; } x1; unsigned char x2[0]; }*)arg1 dataStore:(id)arg2;
- (void)inflateFromStorageRef:(struct TSTCellStorage { struct { unsigned char x_1_1_1; unsigned int x_1_1_2 : 8; unsigned int x_1_1_3 : 8; unsigned char x_1_1_4; unsigned int x_1_1_5 : 16; unsigned int x_1_1_6 : 16; unsigned int x_1_1_7 : 16; unsigned int x_1_1_8 : 16; } x1; unsigned char x2[0]; }*)arg1 dataStore:(id)arg2 suppressingFormulaInflation:(bool)arg3;
- (id)init;
- (id)initWithCell:(id)arg1;
- (id)initWithStorageRef:(struct TSTCellStorage { struct { unsigned char x_1_1_1; unsigned int x_1_1_2 : 8; unsigned int x_1_1_3 : 8; unsigned char x_1_1_4; unsigned int x_1_1_5 : 16; unsigned int x_1_1_6 : 16; unsigned int x_1_1_7 : 16; unsigned int x_1_1_8 : 16; } x1; unsigned char x2[0]; }*)arg1 dataStore:(id)arg2;
- (bool)isCellContentsEqualToCell:(id)arg1;
- (void)writeToStorageRef:(struct TSTCellStorage { struct { unsigned char x_1_1_1; unsigned int x_1_1_2 : 8; unsigned int x_1_1_3 : 8; unsigned char x_1_1_4; unsigned int x_1_1_5 : 16; unsigned int x_1_1_6 : 16; unsigned int x_1_1_7 : 16; unsigned int x_1_1_8 : 16; } x1; unsigned char x2[0]; }*)arg1;

@end
