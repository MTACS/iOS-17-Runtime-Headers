
@interface _UITableViewUpdateSupport : NSObject {
    id  _context;
    <_UITableViewIgnoreDragsToken> * _ignoringDragsToken;
    NSString * _invalidUpdatesErrorMessage;
    bool  _updateItemUsedAutomaticRowAnimation;
    struct _UIDataSourceUpdateMaps { 
        unsigned int oldSectionCount; 
        unsigned int newSectionCount; 
        unsigned int oldGlobalItemCount; 
        unsigned int newGlobalItemCount; 
        unsigned int *oldSectionMap; 
        unsigned int *newSectionMap; 
        unsigned int *oldGlobalItemMap; 
        unsigned int *newGlobalItemMap; 
        bool updatesAreInvalid; 
    }  _updateMaps;
    id * animatedCells;
    id * animatedFooters;
    id * animatedHeaders;
    NSMutableArray * deletedSections;
    long long  globalReorderingRow;
    NSMutableArray * insertedSections;
    NSMutableIndexSet * movedRows;
    long long  newGlobalRow;
    long long  newGlobalRowCount;
    UITableViewRowData * newRowData;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  newRowRange;
    long long  newSection;
    long long  newSectionCount;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  newTableViewVisibleBounds;
    long long  oldGlobalRow;
    long long  oldGlobalRowCount;
    UITableViewRowData * oldRowData;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  oldRowRange;
    long long  oldSection;
    long long  oldSectionCount;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  oldTableViewVisibleBounds;
    UITableView * tableView;
    double  tableViewVisibleBoundsOffset;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  tableViewVisibleBoundsUnion;
    NSArray * updateItems;
    NSMutableArray * viewAnimations;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  visibleRows;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
